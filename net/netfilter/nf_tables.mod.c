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
	{ 0xcf5d1ccb, "nfnetlink_has_listeners" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x94b8945c, "rht_bucket_nested" },
	{ 0x3283e6b0, "prandom_seed_full_state" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe1aca20d, "rhltable_init" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0xda000aa, "rhashtable_insert_slow" },
	{ 0xe7486c43, "__put_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xb4b4c924, "from_kgid_munged" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xee8d74d6, "jiffies64_to_nsecs" },
	{ 0x627d7fbb, "__get_task_comm" },
	{ 0xb38b0239, "nfnetlink_send" },
	{ 0xb1ba6720, "rht_bucket_nested_insert" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x6834ef7a, "rhashtable_free_and_destroy" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x3464b72d, "nla_strdup" },
	{ 0x9166fada, "strncpy" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xcdafc879, "nfnetlink_unicast" },
	{ 0x498543ef, "skb_store_bits" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfaeccbec, "nf_register_net_hook" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xfb693b68, "nf_unregister_net_hook" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x37b82323, "nf_route" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x76de290, "static_key_slow_dec" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcac1f1ed, "__dev_get_by_name" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x222df359, "nfnetlink_set_err" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2a8f41f6, "nla_reserve" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc9928d2a, "static_key_slow_inc" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0x89a5f4cb, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "B1B766E41F203B060A65DFF");
MODULE_INFO(rhelversion, "8.0");
