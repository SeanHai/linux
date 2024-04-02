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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe3af225c, "__pci_hp_register" },
	{ 0x83814079, "pci_find_bus" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xead0ca52, "acpi_bus_get_status" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xbebf963f, "pci_hp_deregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x62a70bb6, "pci_bus_add_device" },
	{ 0xe1a164a8, "pci_bus_assign_resources" },
	{ 0x806edb2f, "pci_scan_single_device" },
	{ 0x75848088, "pci_stop_and_remove_bus_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0xf10dc05c, "acpi_get_pci_dev" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x121da905, "queue_work_on" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap,video,rfkill";

MODULE_ALIAS("acpi*:ASUS010:*");

MODULE_INFO(srcversion, "8CD0607F5B4838ACAB09858");
MODULE_INFO(rhelversion, "8.0");
