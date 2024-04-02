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
	{ 0x710c007, "wmi_driver_unregister" },
	{ 0xf4d92d49, "__wmi_driver_register" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x91a5b8c4, "wmidev_block_query" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi";


MODULE_INFO(srcversion, "94E6C9581AF4C4DFBD3470E");
MODULE_INFO(rhelversion, "8.0");
