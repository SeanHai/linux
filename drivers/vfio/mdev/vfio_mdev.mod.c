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
	{ 0x7ee1ba1d, "mdev_unregister_driver" },
	{ 0x69619653, "mdev_register_driver" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xfa88c111, "vfio_add_group_dev" },
	{ 0x97a56878, "vfio_del_group_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdev,vfio";


MODULE_INFO(srcversion, "166A090C6E4D74CD9418B3B");
MODULE_INFO(rhelversion, "8.0");
