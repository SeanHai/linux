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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9d8ed0db, "sock_diag_put_meminfo" },
	{ 0x754d539c, "strlen" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0x41ee8ccc, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb8a9fc36, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x8f095d08, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa8f39ae3, "sock_diag_unregister_inet_compat" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedd60588, "inet6_lookup" },
	{ 0x7f9c181f, "sock_gen_put" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7998c1e, "sock_diag_check_cookie" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0x9000f3fd, "__inet_lookup_listener" },
	{ 0xa1dbb145, "sock_diag_register_inet_compat" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xb3ac9813, "sock_i_uid" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0xcdc4e378, "netlink_net_capable" },
	{ 0x1b7878c9, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D97DAF78A0635B1B5C117F0");
MODULE_INFO(rhelversion, "8.0");
