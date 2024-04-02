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
	{ 0x865485d7, "neigh_lookup" },
	{ 0xe6d4cc41, "inet_frag_kill" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xc167b202, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc2189066, "inet_frag_find" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xde5fc808, "kfree_skb_partial" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x8facfd69, "inet_frags_fini" },
	{ 0xb9b4d921, "inet_frags_exit_net" },
	{ 0x9872f1, "ieee802154_hdr_peek" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0x7264fdf3, "nd_tbl" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xeefc63a1, "lowpan_header_decompress" },
	{ 0x69144a24, "skb_try_coalesce" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x55d140d0, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2fe2ba4f, "lowpan_unregister_netdevice" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd98a205d, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5db88162, "rhashtable_init" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xc3d26dcf, "lowpan_register_netdevice" },
	{ 0x6c113946, "inet_frags_init" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0x509f625d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0xe8ecd68d, "skb_morph" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";


MODULE_INFO(srcversion, "E11E5632F3505974C03C052");
MODULE_INFO(rhelversion, "8.0");
