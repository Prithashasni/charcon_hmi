/* The file that controls the UI State */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "pthread.h"

#include "MQTTClient.h"
#include "controller.h"
#include "../view/launch_screen.h"
#include "../view/health_check.h"
#include "../view/device_detect.h"
#include "../view/progress_screen.h"
#include "../view/allpage_icons.h"
#include "../view/admin_page.h"
#include "../view/admin_access.h"
#include "../view/styles.h"
#include "../../sub.h"
#include "../../lvgl/lvgl.h"

lv_timer_t *page_task;
lv_timer_t *admin_task;
int prev_page;
int header_page = 0;
int prev_header_page = 0;
int user_flag;

void ui_start()
{
    init_style();

    prev_page = Page;

    pthread_t thread1;
    pthread_create(&thread1, NULL, mqtt_init, NULL);

    create_launch_screen();

    page_task = lv_timer_create(page_change, NULL, NULL);
    lv_timer_ready(page_task);
    lv_timer_handler();
    lv_timer_set_repeat_count(page_task, -1);
}

void page_change()
{
    if (Page != CONST_DeviceFailure && header_page != 0)
    {
        if (prev_header_page != header_page)
        {
            admin_page();
        }
    }
    else if (prev_page != Page)
    {
        lv_obj_add_flag(img_bosch_logo, LV_OBJ_FLAG_HIDDEN);
        wallbox_page();
    }
}

void admin_page()
{
    prev_page = Page;
    if (header_page == CONST_AdminLoginPage)
    {
        if(user_flag != 0)
        {
            admin_login_pages();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_AdminLoginPage;
            user_flag = CONST_AdminLoginPage;
        }
        else{
            admin_login_pages();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_AdminLoginPage;
            user_flag = CONST_AdminLoginPage;
        }
    }
    else if (header_page == CONST_SoftwareUpdate)
    {
        if(user_flag != 0)
        {
            scr_software_update();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_SoftwareUpdate;
            user_flag = CONST_SoftwareUpdate;
        }
        else{
            scr_software_update();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_SoftwareUpdate;
            user_flag = CONST_SoftwareUpdate;
        }
    }
    else if (header_page == CONST_VseccSettings)
    {
        if(user_flag != 0)
        {
            scr_vsecc_settings();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_VseccSettings;
            user_flag = CONST_VseccSettings;
        }
        else{
            scr_vsecc_settings();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_VseccSettings;
            user_flag = CONST_VseccSettings;
        }
    }
    else if(header_page == CONST_CharconSettings)
    {
        if(user_flag != 0)
        {
            scr_charcon_settings();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_CharconSettings;
            user_flag = CONST_CharconSettings;
        }
        else{
            scr_charcon_settings();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_CharconSettings;
            user_flag = CONST_CharconSettings;
        }
    }
    else if(header_page == CONST_MasterControl)
    {
        if(user_flag != 0)
        {
            scr_master_control();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_MasterControl;
            user_flag = CONST_MasterControl;
        }
        else{
            scr_master_control();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_MasterControl;
            user_flag = CONST_MasterControl;
        }
    }
    else if(header_page == CONST_AdminLogsPage)
    {
        if(user_flag != 0)
        {
            scr_logs_page();
            delete_obj_on_headpage(user_flag);
            prev_header_page = CONST_AdminLogsPage;
            user_flag = CONST_AdminLogsPage;
        }
        else{
            scr_logs_page();
            delete_objects_on_page(prev_page);
            prev_header_page = CONST_AdminLogsPage;
            user_flag = CONST_AdminLogsPage;
        }
    }
}

void wallbox_page()
{
    if (Page == CONST_DeviceFailure)
    {
        if (user_flag != 0)
        {
            wallbox_failure_status();
            delete_obj_on_headpage(user_flag);
            prev_page = CONST_DeviceFailure;
            user_flag = CONST_DeviceFailure;
        }
        else
        {
            wallbox_failure_status();
            delete_objects_on_page(prev_page);
            prev_page = CONST_DeviceFailure;
            user_flag = CONST_DeviceFailure;
        }
    }
    else if (Page == CONST_HealthCheck)
    {
        screen_dc_check();
        delete_objects_on_page(prev_page); 
        prev_page = CONST_HealthCheck;
    }
    else if (Page == CONST_ChargingInitPage)
    {
        initialize_device();
        delete_objects_on_page(prev_page);  
        prev_page = CONST_ChargingInitPage;
    }
    else if (Page == CONST_ChargingProgressPage)
    {
        create_progress_screen();
        delete_objects_on_page(prev_page);   
        prev_page = CONST_ChargingProgressPage;
    }
    else if (Page == CONST_MissingConfig)
    {
        wallbox_not_configured();
        delete_objects_on_page(prev_page);  
        prev_page = CONST_MissingConfig;
    }
    else if (Page == CONST_ReadyToCharge)
    {
        home_screen();
        delete_objects_on_page(prev_page);    
        prev_page = CONST_ReadyToCharge;
    }
}

void delete_objects_on_page(int prev_page)
{
    if (prev_page == CONST_DeviceFailure)
    {
        lv_obj_del(failure_label);
        lv_obj_del(service_label);
        lv_obj_del(img_failure);
    }
    else if (prev_page == CONST_HealthCheck)
    {
        lv_obj_del(img_red_check);
        lv_obj_del(label_dc_text);
        lv_obj_del(cable_text);
        lv_obj_del(power_text);
        lv_obj_del(check1_text);
        lv_obj_del(check1_good);
        lv_obj_del(check2_text);
        lv_obj_del(check2_good);
        lv_obj_del(img_green_check);
        lv_obj_del(ready_text);
        lv_timer_del(check_task);
        lv_anim_del(check1_text, anim_opacity_cb);
        lv_anim_del(check2_text, anim_opacity_cb);
        lv_anim_del(img_red_check, anim_zoom_cb);

        HeartBeatMsg = -1;
    }
    else if (prev_page == CONST_ChargingInitPage)
    {
        lv_obj_del(initialize_text);
        lv_obj_del(img_initializing);
        lv_obj_del(connection_text);
    }
    else if (prev_page == CONST_ChargingProgressPage)
    {
        lv_obj_del(img_money);
        lv_obj_del(text_costgrid);
        lv_obj_del(img_power);
        lv_obj_del(text_energy);
        lv_obj_del(text_solar);
        lv_obj_del(text_grid);
        lv_obj_del(text_total);
        lv_obj_del(text_time_charging);
        lv_obj_del(img_cost_unit);
        lv_obj_del(cost_text);
        lv_obj_del(solar_energy_text);
        lv_obj_del(grid_energy_text);
        lv_obj_del(img_tot_cost);
        lv_obj_del(total_cost_value);
        lv_obj_del(stop_button);
        lv_obj_del(terminate_text);
        lv_obj_del(img_terminate);
        lv_obj_del(charging_complete);
        lv_obj_del(unplug_text);
        lv_obj_del(chart1);
        lv_obj_del(timer_label);
        lv_timer_del(progress_task);
        lv_timer_del(timer_task);
    }
    else if (prev_page == CONST_MissingConfig)
    {
        lv_obj_del(configure_label);
        lv_obj_del(please_conf);
        lv_obj_del(img_error);
    }
    else if (prev_page == CONST_ReadyToCharge)
    {
        lv_obj_del(default_text);
    }
}

void delete_obj_on_headpage(int header_page)
{
    if (prev_header_page == CONST_AdminLoginPage)
    {
        lv_obj_del(login_text);
        lv_obj_del(user_text);
        lv_obj_del(pwd_text);
        lv_obj_del(text_ta);
        lv_obj_del(pwd_ta);
        lv_obj_del(text_inc);
        lv_obj_del(keyboard_area);
        lv_obj_del(cancel_button);
    }
    else if (prev_header_page == CONST_SoftwareUpdate)
    {
        lv_obj_del(updates_text);
        lv_obj_del(img_init);
        lv_obj_del(img_back);
        lv_obj_del(back_text);
    }
    else if(prev_header_page == CONST_VseccSettings)
    {
        lv_obj_del(icon_vsecc);
        lv_obj_del(vsecc_settings);
        lv_obj_del(vsecc_underline);
        lv_obj_del(vehicle_label);
        lv_obj_del(vehicle_num);
        lv_obj_del(state_label);
        lv_obj_del(state_value);
        lv_obj_del(mode_label);
        lv_obj_del(mode_value);
        lv_obj_del(cancel_vsecc);
    }
    else if(prev_header_page == CONST_CharconSettings)
    {
        lv_timer_del(rect_timer); 
        lv_obj_del(icon_charcon);
        lv_obj_del(charcon_settings);
        lv_obj_del(charcon_underline);
        lv_obj_del(charcon_current_limit);
        lv_obj_del(charcon_mode_label);
        lv_obj_del(charcon_mode_value);
        lv_obj_del(charcon_current_label);
        lv_obj_del(charcon_current_value);
        lv_obj_del(voltage_label);
        lv_obj_del(voltage_value);
        lv_obj_del(charcon_ta);
        lv_obj_del(charcon_keyboard_area);
        lv_obj_del(rect_ta);
        lv_obj_del(cancel_charcon);
    }
    else if(header_page == CONST_MasterControl)
    {
        lv_timer_del(rect1_timer);
        lv_obj_del(icon_mc);
        lv_obj_del(mc_settings);
        lv_obj_del(mc_underline);
        lv_obj_del(mc_current_limit);
        lv_obj_del(mc_mode_label);
        lv_obj_del(mc_mode_value);
        lv_obj_del(mc_ta);
        lv_obj_del(mc_keyboard_area);
        lv_obj_del(rect_ta1);
        lv_obj_del(cancel_mc);
    
    }
    else if(header_page == CONST_AdminLogsPage)
    {
        lv_timer_del(log_timer);
        lv_obj_del(icon_log);
        lv_obj_del(logs_text);
        lv_obj_del(logs_underline);
        lv_obj_del(logs_page);
        lv_obj_del(cancel_logs);
    }
}
