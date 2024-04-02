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
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x524ff4c1, "register_sja1000dev" },
	{ 0x946bf5ab, "alloc_sja1000dev" },
	{ 0xa1a888e1, "devm_ioremap_nocache" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x17325807, "free_sja1000dev" },
	{ 0xae1571d5, "unregister_sja1000dev" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sja1000";

MODULE_ALIAS("of:N*T*Cnxp,sja1000");
MODULE_ALIAS("of:N*T*Cnxp,sja1000C*");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000C*");

MODULE_INFO(srcversion, "2F735726428078826A42F23");
MODULE_INFO(rhelversion, "8.0");
