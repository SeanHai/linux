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
	{ 0xf470c319, "sdhci_remove_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeba3aa83, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x43d5d049, "sdhci_resume_host" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x53c9342c, "sdhci_add_host" },
	{ 0x771c3b21, "sdhci_free_host" },
	{ 0x995fd3e7, "sdhci_set_clock" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xbf4bea32, "sdhci_suspend_host" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9cadc3c8, "sdhci_reset" },
	{ 0x4a6c872, "sdhci_set_uhs_signaling" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1ba75b02, "sdhci_set_bus_width" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci";


MODULE_INFO(srcversion, "20E0FE0AACA79EDFDA77D89");
MODULE_INFO(rhelversion, "8.0");
