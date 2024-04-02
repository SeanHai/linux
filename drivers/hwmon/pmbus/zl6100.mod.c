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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xfca74b4, "pmbus_do_remove" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xbfbd8089, "pmbus_do_probe" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee2f23f5, "pmbus_read_word_data" },
	{ 0x810fc7cc, "pmbus_write_word_data" },
	{ 0xea15956e, "pmbus_clear_cache" },
	{ 0x2d32fc1a, "pmbus_read_byte_data" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb0d3b92c, "pmbus_write_byte" },
	{ 0x93f3fa2f, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");

MODULE_INFO(srcversion, "F9B9C74119590BE2F8C75F8");
MODULE_INFO(rhelversion, "8.0");
