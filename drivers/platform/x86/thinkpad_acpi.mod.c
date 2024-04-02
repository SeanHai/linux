#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x349cba85, "strchr" },
	{ 0xc7f4b92, "single_open" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6badec18, "device_add_groups" },
	{ 0x90abb39c, "battery_hook_unregister" },
	{ 0x985ca3e0, "single_release" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x59ddc0f9, "led_classdev_resume" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x6ce74be7, "battery_hook_register" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x91715312, "sprintf" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe8de29eb, "mutex_lock_killable" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xfe7843b, "input_event" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xeccd3e0c, "acpi_handle_printk" },
	{ 0xf7d6636f, "current_task" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xf28cb91, "nvram_read_byte" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x9ce3f83f, "nvram_write_byte" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd460abe3, "__task_pid_nr_ns" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa9597102, "driver_create_file" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x58aae8f0, "led_update_brightness" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0xf789deff, "input_register_device" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb8099651, "proc_create_data" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x3fa81040, "device_remove_groups" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x721b1851, "skip_spaces" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x3ead91cf, "led_classdev_suspend" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x227e1d40, "driver_remove_file" },
	{ 0x28318305, "snprintf" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,snd,video";

MODULE_ALIAS("acpi*:IBM0068:*");
MODULE_ALIAS("acpi*:LEN0068:*");
MODULE_ALIAS("acpi*:LEN0268:*");

MODULE_INFO(srcversion, "B25508C0D64F57CCDA3C505");
MODULE_INFO(rhelversion, "8.0");
