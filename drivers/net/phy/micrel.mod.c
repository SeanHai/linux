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
	{ 0xf382beca, "genphy_restart_aneg" },
	{ 0xdbcdb48d, "genphy_resume" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61eba611, "phy_init_hw" },
	{ 0x3def8b73, "genphy_read_status" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xc073679e, "genphy_config_aneg" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xa371e027, "genphy_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");

MODULE_INFO(srcversion, "30A87BDCB3E30F758AA2EE8");
MODULE_INFO(rhelversion, "8.0");
