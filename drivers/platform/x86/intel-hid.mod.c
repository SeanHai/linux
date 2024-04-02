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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x27e1a049, "printk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0xad43008d, "acpi_create_platform_device" },
	{ 0x42c9294a, "acpi_match_device_ids" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xfe7843b, "input_event" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x34c28e23, "pm_wakeup_dev_event" },
	{ 0x5f726f82, "sparse_keymap_entry_from_scancode" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap";

MODULE_ALIAS("acpi*:INT33D5:*");

MODULE_INFO(srcversion, "DDE7728B6FC307347B58D7D");
MODULE_INFO(rhelversion, "8.0");
