#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2cec6038, "kobject_put" },
	{ 0xa967147b, "kset_create_and_add" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xcac40aec, "firmware_kobj" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x26fd227, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7CD418496EF7A607DC0B768");
MODULE_INFO(rhelversion, "8.0");
