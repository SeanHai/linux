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
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x642833f8, "i2c_acpi_find_bus_speed" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xed0773b3, "i2c_dw_probe" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0xbc41de09, "set_primary_fwnode" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0x622dbcf1, "i2c_dw_read_comp_param" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x2224e2c9, "i2c_dw_prepare_clk" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-designware-core";

MODULE_ALIAS("acpi*:INT33C2:*");
MODULE_ALIAS("acpi*:INT33C3:*");
MODULE_ALIAS("acpi*:INT3432:*");
MODULE_ALIAS("acpi*:INT3433:*");
MODULE_ALIAS("acpi*:80860F41:*");
MODULE_ALIAS("acpi*:808622C1:*");
MODULE_ALIAS("acpi*:AMD0010:*");
MODULE_ALIAS("acpi*:AMDI0010:*");
MODULE_ALIAS("acpi*:AMDI0510:*");
MODULE_ALIAS("acpi*:APMC0D0F:*");
MODULE_ALIAS("acpi*:HISI02A1:*");
MODULE_ALIAS("acpi*:HISI02A2:*");

MODULE_INFO(srcversion, "99EFF16803DE816C04B2FD3");
MODULE_INFO(rhelversion, "8.0");
