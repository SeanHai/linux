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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9939eba0, "backlight_unregister_notifier" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x2ff3cc15, "thermal_cooling_device_unregister" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd3135cf4, "acpi_notifier_call_chain" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x42c9294a, "acpi_match_device_ids" },
	{ 0xfe7843b, "input_event" },
	{ 0x2f384db3, "acpi_is_video_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xe5b8dbf0, "backlight_device_get_by_type" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf10dc05c, "acpi_get_pci_dev" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xe3a53f4c, "sort" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x32e6f1a0, "acpi_video_backlight_string" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdc512134, "backlight_register_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe9ebbbb, "acpi_osi_is_win8" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xefcea2e7, "acpi_warning" },
	{ 0x7d4facf, "thermal_cooling_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x377d8004, "acpi_error" },
	{ 0x7d12d76d, "acpi_get_parent" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXVIDEO:*");

MODULE_INFO(srcversion, "F8A17C6681A49823958E796");
MODULE_INFO(rhelversion, "8.0");
