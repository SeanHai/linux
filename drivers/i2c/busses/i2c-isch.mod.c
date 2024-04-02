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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x28318305, "snprintf" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "526E92CC590817390BF2843");
MODULE_INFO(rhelversion, "8.0");
