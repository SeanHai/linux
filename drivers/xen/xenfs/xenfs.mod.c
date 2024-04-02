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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa5c96a88, "xen_xenbus_fops" },
	{ 0xbbbcd2da, "mount_single" },
	{ 0x5cfef700, "xen_privcmd_fops" },
	{ 0x802e99be, "kill_litter_super" },
	{ 0x2105444b, "default_llseek" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x4640f1c4, "simple_fill_super" },
	{ 0xb74da11c, "unregister_filesystem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xen-privcmd";


MODULE_INFO(srcversion, "BD3BA1CAF4808DD55F69E44");
MODULE_INFO(rhelversion, "8.0");
