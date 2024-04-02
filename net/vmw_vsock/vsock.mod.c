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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x373ba864, "release_sock" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x92e83972, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xa592a1a, "sk_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xcd45ab23, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa80c15d5, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecb1c289, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xda10ec3, "security_sock_graft" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A9F77168BBE6AABAF8BC1A0");
MODULE_INFO(rhelversion, "8.0");
