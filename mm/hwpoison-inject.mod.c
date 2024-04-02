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
	{ 0x99824fdf, "simple_attr_write" },
	{ 0x388c5d90, "simple_attr_read" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0xdc37c216, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x7918d817, "memory_failure" },
	{ 0x27e1a049, "printk" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x51947c56, "hwpoison_filter" },
	{ 0x1754551d, "PageHuge" },
	{ 0x417226a9, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0x83a4b665, "get_hwpoison_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x54c99fac, "mem_section" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C74A4DAA72C3345B5D7A453");
MODULE_INFO(rhelversion, "8.0");
