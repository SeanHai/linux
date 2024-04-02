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
	{ 0x31ce687e, "genphy_write_mmd_unsupported" },
	{ 0xe5702b3d, "genphy_read_mmd_unsupported" },
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0x237f9c4d, "__mdiobus_read" },
	{ 0xeb9e3df8, "__mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xa371e027, "genphy_suspend" },
	{ 0xdbcdb48d, "genphy_resume" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0x590b0d0d, "phy_modify_paged" },
	{ 0xf3cec7a6, "genphy_config_init" },
	{ 0x192f5e6, "phy_read_paged" },
	{ 0xc2ba2566, "phy_write_paged" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:???????????111001100100000010110");
MODULE_ALIAS("mdio:???????????111001100100100010010");
MODULE_ALIAS("mdio:???????????111001100100100010100");
MODULE_ALIAS("mdio:???????????111001100100100010101");
MODULE_ALIAS("mdio:???????????111001100100100010110");

MODULE_INFO(srcversion, "733F5AA7F9EB576C5E124D4");
MODULE_INFO(rhelversion, "8.0");
