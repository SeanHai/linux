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
	{ 0xbfbd8089, "pmbus_do_probe" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("of:N*T*Cti,cd9200");
MODULE_ALIAS("of:N*T*Cti,cd9200C*");
MODULE_ALIAS("of:N*T*Cti,cd9220");
MODULE_ALIAS("of:N*T*Cti,cd9220C*");
MODULE_ALIAS("of:N*T*Cti,cd9222");
MODULE_ALIAS("of:N*T*Cti,cd9222C*");
MODULE_ALIAS("of:N*T*Cti,cd9224");
MODULE_ALIAS("of:N*T*Cti,cd9224C*");
MODULE_ALIAS("of:N*T*Cti,cd9240");
MODULE_ALIAS("of:N*T*Cti,cd9240C*");
MODULE_ALIAS("of:N*T*Cti,cd9244");
MODULE_ALIAS("of:N*T*Cti,cd9244C*");
MODULE_ALIAS("of:N*T*Cti,cd9246");
MODULE_ALIAS("of:N*T*Cti,cd9246C*");
MODULE_ALIAS("of:N*T*Cti,cd9248");
MODULE_ALIAS("of:N*T*Cti,cd9248C*");
MODULE_ALIAS("i2c:ucd9200");
MODULE_ALIAS("i2c:ucd9220");
MODULE_ALIAS("i2c:ucd9222");
MODULE_ALIAS("i2c:ucd9224");
MODULE_ALIAS("i2c:ucd9240");
MODULE_ALIAS("i2c:ucd9244");
MODULE_ALIAS("i2c:ucd9246");
MODULE_ALIAS("i2c:ucd9248");

MODULE_INFO(srcversion, "3C8EC448C850710B06CF888");
MODULE_INFO(rhelversion, "8.0");
