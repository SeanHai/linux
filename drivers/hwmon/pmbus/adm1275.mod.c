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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xbfbd8089, "pmbus_do_probe" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee2f23f5, "pmbus_read_word_data" },
	{ 0x2d32fc1a, "pmbus_read_byte_data" },
	{ 0x810fc7cc, "pmbus_write_word_data" },
	{ 0x93f3fa2f, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "9E144D7B6D62D8F97DD0A83");
MODULE_INFO(rhelversion, "8.0");
