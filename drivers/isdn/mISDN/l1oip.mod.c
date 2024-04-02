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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x86db5987, "kernel_sendmsg" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xae55feaa, "send_sig" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0xa317e6b9, "sock_release" },
	{ 0x9357a5be, "sock_recvmsg" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x54fdde6a, "iov_iter_kvec" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xad3ea97, "mISDN_freebchannel" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x714970d4, "sock_create" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0x509f625d, "consume_skb" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";


MODULE_INFO(srcversion, "60DE4BC2320C4887CA3EC6E");
MODULE_INFO(rhelversion, "8.0");
