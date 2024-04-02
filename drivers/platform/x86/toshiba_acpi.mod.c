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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0xf789deff, "input_register_device" },
	{ 0xb6d860ba, "i8042_install_filter" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xb8099651, "proc_create_data" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x46860710, "__iio_device_register" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x568b4269, "iio_device_alloc" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x6bddef80, "misc_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x373db350, "kstrtoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc7f4b92, "single_open" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x27892028, "i8042_remove_filter" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x8cc94eab, "iio_device_free" },
	{ 0x3923f09, "iio_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xe48ada37, "sysfs_update_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,video,sparse-keymap,wmi";

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "3A6736617F58F6E61EC2CE7");
MODULE_INFO(rhelversion, "8.0");
