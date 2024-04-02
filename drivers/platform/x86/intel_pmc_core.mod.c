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
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xedc03953, "iounmap" },
	{ 0x27e1a049, "printk" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xad137d3, "lpit_read_residency_count_address" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0xdc20f322, "kstrtouint_from_user" },
	{ 0x41715c18, "seq_puts" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc7f4b92, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*0083*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*0083*");

MODULE_INFO(srcversion, "D3C438F900D00573B9E5AB2");
MODULE_INFO(rhelversion, "8.0");
