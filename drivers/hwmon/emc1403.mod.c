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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:emc1402");
MODULE_ALIAS("i2c:emc1403");
MODULE_ALIAS("i2c:emc1404");
MODULE_ALIAS("i2c:emc1412");
MODULE_ALIAS("i2c:emc1413");
MODULE_ALIAS("i2c:emc1414");
MODULE_ALIAS("i2c:emc1422");
MODULE_ALIAS("i2c:emc1423");
MODULE_ALIAS("i2c:emc1424");

MODULE_INFO(srcversion, "6337148C209AF149DB87EEC");
MODULE_INFO(rhelversion, "8.0");
