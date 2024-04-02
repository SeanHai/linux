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
	{ 0x7b922d9a, "genphy_setup_forced" },
	{ 0xc073679e, "genphy_config_aneg" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xf3cec7a6, "genphy_config_init" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????????????1111110001100010????");
MODULE_ALIAS("mdio:????????????11111100011011??????");
MODULE_ALIAS("mdio:????????????0111000001100111????");
MODULE_ALIAS("mdio:????????????0111000001001101????");
MODULE_ALIAS("mdio:????????????0111000001001010????");
MODULE_ALIAS("mdio:????????????0111000001100110????");
MODULE_ALIAS("mdio:????????????1111110001010101????");
MODULE_ALIAS("mdio:????????????1111110001001011????");

MODULE_INFO(srcversion, "22A310DE2681622D8EC2D12");
MODULE_INFO(rhelversion, "8.0");
