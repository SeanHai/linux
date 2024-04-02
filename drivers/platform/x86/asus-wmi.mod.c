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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x806edb2f, "pci_scan_single_device" },
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xc7f4b92, "single_open" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x75848088, "pci_stop_and_remove_bus_device" },
	{ 0x985ca3e0, "single_release" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x40c9f093, "debugfs_create_x32" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xe1a164a8, "pci_bus_assign_resources" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xe3af225c, "__pci_hp_register" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbebf963f, "pci_hp_deregister" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x83814079, "pci_find_bus" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x2e105578, "__platform_create_bundle" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x121da905, "queue_work_on" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x62a70bb6, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,sparse-keymap,wmi,video";


MODULE_INFO(srcversion, "EC08CDA7B0F54F4C48674D0");
MODULE_INFO(rhelversion, "8.0");
