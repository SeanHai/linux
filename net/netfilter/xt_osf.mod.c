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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6e014603, "xt_unregister_match" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0x888fcb33, "xt_register_match" },
	{ 0x27e1a049, "printk" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5376a79, "nf_osf_match" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_osf";


MODULE_INFO(srcversion, "1D9F39BE8C6E547B76CD2BA");
MODULE_INFO(rhelversion, "8.0");
