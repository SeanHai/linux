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
	{ 0xc2c0aff6, "mlxsw_core_driver_unregister" },
	{ 0x90af50d3, "mlxsw_i2c_driver_unregister" },
	{ 0x7bb73390, "mlxsw_core_driver_register" },
	{ 0xd972d7f9, "mlxsw_i2c_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_i2c";

MODULE_ALIAS("i2c:mlxsw_minimal");

MODULE_INFO(srcversion, "9C6D6E86747A78E01490647");
MODULE_INFO(rhelversion, "8.0");
