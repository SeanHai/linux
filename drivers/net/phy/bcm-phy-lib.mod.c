#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xc905bbd0, "phy_read_mmd" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc3ec673, "phy_write_mmd" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5FEF64D72B0A4DAC5559BD0");
MODULE_INFO(rhelversion, "8.0");
