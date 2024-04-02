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
	{ 0x743ac344, "class_find_device" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf221a289, "get_net_ns_by_fd" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x754d539c, "strlen" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6a909ddc, "dev_change_net_namespace" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x7e885a28, "get_net_ns_by_pid" },
	{ 0x91715312, "sprintf" },
	{ 0xe7486c43, "__put_net" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0xce7d32b3, "dev_set_mac_address" },
	{ 0x91018733, "device_del" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xcca62a76, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x94fb0dcb, "class_for_each_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xea375d8a, "genl_family_attrbuf" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0x5f20d53e, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x551be51f, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x4205991d, "trace_output_call" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6839a855, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F98161623C4F2AB427A0B8A");
MODULE_INFO(rhelversion, "8.0");
