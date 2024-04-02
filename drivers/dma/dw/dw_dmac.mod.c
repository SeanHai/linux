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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0xbc328e0a, "dw_dma_probe" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xc4b0fb09, "dw_dma_enable" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4755cbbf, "dw_dma_remove" },
	{ 0xf44f6875, "dw_dma_disable" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x35ae1aa4, "acpi_dma_simple_xlate" },
	{ 0x2fa873e, "dw_dma_filter" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5fd59fb, "devm_acpi_dma_controller_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INTL9C60:*");

MODULE_INFO(srcversion, "9C15164BB4F6FB9B6F55066");
MODULE_INFO(rhelversion, "8.0");
