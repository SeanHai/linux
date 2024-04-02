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
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6272918d, "register_cc770dev" },
	{ 0x7dc6d6, "alloc_cc770dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xf5b0ceae, "free_cc770dev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc11d805, "unregister_cc770dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cc770";

MODULE_ALIAS("of:N*T*Cbosch,cc770");
MODULE_ALIAS("of:N*T*Cbosch,cc770C*");
MODULE_ALIAS("of:N*T*Cintc,82527");
MODULE_ALIAS("of:N*T*Cintc,82527C*");

MODULE_INFO(srcversion, "549C0F98F770AC450D28F5A");
MODULE_INFO(rhelversion, "8.0");
