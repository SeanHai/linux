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
	{ 0x9b2420a5, "tcf_unregister_action" },
	{ 0x2988ef6c, "tcf_register_action" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x5d71f8dd, "nf_conntrack_find_get" },
	{ 0x4d2e7ca6, "nf_ct_get_tuplepr" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x863d2883, "tcf_idr_search" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x87adfe16, "__tcf_idr_release" },
	{ 0x7b4dafb6, "tcf_idr_cleanup" },
	{ 0xd402a2e7, "tcf_idr_insert" },
	{ 0xc6f06034, "tcf_idr_create" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8926aa87, "tcf_idr_check_alloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x291acd6f, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1421bea, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "A479008DE003FC0E9EE5227");
MODULE_INFO(rhelversion, "8.0");
