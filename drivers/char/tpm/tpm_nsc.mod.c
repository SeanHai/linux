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
	{ 0xf6295c57, "tpm_pm_resume" },
	{ 0x36a8bdec, "tpm_pm_suspend" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf41eb3c7, "tpm_chip_register" },
	{ 0xa29a929f, "tpmm_chip_alloc" },
	{ 0x5eba9410, "__request_region" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xdf89529f, "tpm_chip_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6EFF5DA99D610B0C2FCA1A4");
MODULE_INFO(rhelversion, "8.0");
