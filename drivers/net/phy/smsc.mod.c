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
	{ 0xdbcdb48d, "genphy_resume" },
	{ 0xa371e027, "genphy_suspend" },
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0xb8ded467, "genphy_soft_reset" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0x3def8b73, "genphy_read_status" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");

MODULE_INFO(srcversion, "7A3A816CA602D3B28A0E8B6");
MODULE_INFO(rhelversion, "8.0");
