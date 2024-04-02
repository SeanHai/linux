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
	{ 0xfca74b4, "pmbus_do_remove" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xee2f23f5, "pmbus_read_word_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xbfbd8089, "pmbus_do_probe" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb0d3b92c, "pmbus_write_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d32fc1a, "pmbus_read_byte_data" },
	{ 0x93f3fa2f, "pmbus_get_driver_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");

MODULE_INFO(srcversion, "F086A0F67FA71B3ADC67A75");
MODULE_INFO(rhelversion, "8.0");
