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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x1a57129a, "nf_queue_entry_release_refs" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x3cf486cd, "nf_queue_entry_get_refs" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcdafc879, "nfnetlink_unicast" },
	{ 0x27e1a049, "printk" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x47be24c7, "skb_zerocopy_headlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa4f28444, "skb_tx_error" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x36e5d509, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xb4b4c924, "from_kgid_munged" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x1f0d04df, "__nla_reserve" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0x6f69238c, "nfnl_ct_hook" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x6a838da0, "nf_register_queue_handler" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xa39f58ee, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x66e760d4, "nf_reinject" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x48cf37da, "nf_ct_hook" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "0F2593D813153D1D6329077");
MODULE_INFO(rhelversion, "8.0");
