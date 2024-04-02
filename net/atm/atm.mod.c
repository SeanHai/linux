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
	{ 0x373ba864, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xae55feaa, "send_sig" },
	{ 0x41715c18, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x99cb4bf5, "compat_sock_get_timestamp" },
	{ 0xa99ad2af, "sock_get_timestamp" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x91018733, "device_del" },
	{ 0xd257960c, "device_register" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6edf4a5a, "proc_mkdir_data" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0x6aa75690, "sock_wake_async" },
	{ 0xa592a1a, "sk_free" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xed946a48, "init_net" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0xf88aafa7, "__sock_recv_ts_and_drops" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb27e9481, "compat_sock_get_timestampns" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xd0c86c05, "put_device" },
	{ 0xa6f8de0f, "sock_get_timestampns" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa80c15d5, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc9d2fb8f, "remove_proc_subtree" },
	{ 0xb8099651, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x509f625d, "consume_skb" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x3f0ffbe, "skb_free_datagram" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "357B936A205B004757E78EE");
MODULE_INFO(rhelversion, "8.0");
