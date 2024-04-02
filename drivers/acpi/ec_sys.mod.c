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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x9a910d01, "simple_open" },
	{ 0x2105444b, "default_llseek" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xc6651926, "debugfs_create_bool" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x40c9f093, "debugfs_create_x32" },
	{ 0x91715312, "sprintf" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x97aeeaf7, "first_ec" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9BF899323CCD8A078D64412");
MODULE_INFO(rhelversion, "8.0");
