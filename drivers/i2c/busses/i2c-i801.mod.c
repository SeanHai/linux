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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x827e61f8, "acpi_has_watchdog" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x28318305, "snprintf" },
	{ 0xe6478472, "_dev_info" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0x6978a86b, "acpi_check_resource_conflict" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xbc41de09, "set_primary_fwnode" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x16ba404b, "pci_bus_write_config_byte" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xb6ac6def, "pci_bus_read_config_byte" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x78040ede, "pci_bus_write_config_dword" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x18dc208c, "i2c_handle_smbus_host_notify" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x7a23ce6d, "pm_runtime_forbid" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F52C5E907C86690D03E27A2");
MODULE_INFO(rhelversion, "8.0");
