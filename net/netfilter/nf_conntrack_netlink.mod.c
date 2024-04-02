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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0x6eab255b, "nf_ct_iterate_cleanup_net" },
	{ 0xd02893c3, "nf_ct_remove_expectations" },
	{ 0xc71cdf3d, "nf_conntrack_eventmask_report" },
	{ 0x318f7969, "add_timer" },
	{ 0x464b359, "__nf_ct_expect_find" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0xea6823f, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xcf5d1ccb, "nfnetlink_has_listeners" },
	{ 0x222df359, "nfnetlink_set_err" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xb38b0239, "nfnetlink_send" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xd526c572, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x754d539c, "strlen" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x309de38a, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5d71f8dd, "nf_conntrack_find_get" },
	{ 0x57379798, "nf_conntrack_free" },
	{ 0x81963de2, "nf_ct_ext_add" },
	{ 0xa8651bb0, "__nf_ct_try_assign_helper" },
	{ 0x9861197b, "nf_ct_helper_ext_add" },
	{ 0xc7b384b6, "__nf_conntrack_helper_find" },
	{ 0x27e40399, "nf_conntrack_alloc" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xe9000478, "nf_nat_hook" },
	{ 0xece97819, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x146ea688, "nf_ct_expect_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb6ff3768, "nf_connlabels_replace" },
	{ 0xef951dab, "nf_ct_unlink_expect_report" },
	{ 0xdc533ef5, "nf_ct_expect_iterate_net" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x69fce43d, "nf_ct_expect_find_get" },
	{ 0xb387957f, "nf_ct_l3protos" },
	{ 0xc38e3a67, "nf_conntrack_l3proto_generic" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9c11cbd0, "nf_ct_expect_put" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0x27e1a049, "printk" },
	{ 0x833f2b23, "nf_ct_expect_register_notifier" },
	{ 0x35c9f415, "nf_conntrack_register_notifier" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa8cfc05a, "__nf_ct_l4proto_find" },
	{ 0xc45a789a, "nf_conntrack_unregister_notifier" },
	{ 0x8160af97, "nf_ct_expect_unregister_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "8BBA14287FDCD2B6FDCF199");
MODULE_INFO(rhelversion, "8.0");
