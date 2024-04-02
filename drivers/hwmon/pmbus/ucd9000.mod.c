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
	{ 0xd5272c1b, "simple_attr_release" },
	{ 0x4833584b, "debugfs_attr_write" },
	{ 0xf183b83e, "debugfs_attr_read" },
	{ 0x28cde093, "no_llseek" },
	{ 0x9a910d01, "simple_open" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xfca74b4, "pmbus_do_remove" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x4c84ceea, "pmbus_set_page" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x5eb5d4a8, "pmbus_get_debugfs_dir" },
	{ 0xbfbd8089, "pmbus_do_probe" },
	{ 0x48feca9, "devm_gpiochip_add_data" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93f3fa2f, "pmbus_get_driver_info" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");

MODULE_INFO(srcversion, "BC8072E9E76867CABD42A06");
MODULE_INFO(rhelversion, "8.0");
