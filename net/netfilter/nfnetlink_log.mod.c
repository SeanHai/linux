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
	{ 0x4c6cec36, "nf_log_unregister" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xcc7ea00e, "nf_log_register" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x544e939a, "nf_log_bind_pf" },
	{ 0xa9068299, "nf_log_unbind_pf" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f69238c, "nfnl_ct_hook" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x754d539c, "strlen" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xcdafc879, "nfnetlink_unicast" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xb4b4c924, "from_kgid_munged" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x2cefa38, "proc_set_user" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0x2722b8d9, "nf_log_unset" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7486c43, "__put_net" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "1222EA0220C60587359DDBF");
MODULE_INFO(rhelversion, "8.0");
