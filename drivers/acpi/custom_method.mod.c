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
	{ 0x2105444b, "default_llseek" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xa0597725, "acpi_debugfs_dir" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x76d451c4, "add_taint" },
	{ 0x37a0cba, "kfree" },
	{ 0x6be1c1f8, "acpi_install_method" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4632B25BCACCEC210ABE813");
MODULE_INFO(rhelversion, "8.0");
