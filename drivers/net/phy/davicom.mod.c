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
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0xc073679e, "genphy_config_aneg" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????000110000001101110001000????");
MODULE_ALIAS("mdio:????000110000001101110001011????");
MODULE_ALIAS("mdio:????000110000001101110001010????");
MODULE_ALIAS("mdio:????000000011000000110111000????");

MODULE_INFO(srcversion, "40EEEA6C37EF0F30020F238");
MODULE_INFO(rhelversion, "8.0");
