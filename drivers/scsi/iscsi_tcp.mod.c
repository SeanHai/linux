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
	{ 0x2626b6d6, "iscsi_eh_cmd_timed_out" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x789b83dc, "iscsi_target_alloc" },
	{ 0xe1eaf333, "iscsi_eh_recover_target" },
	{ 0xfd4ecf31, "iscsi_eh_device_reset" },
	{ 0xcce818da, "iscsi_eh_abort" },
	{ 0x4a0e5a8, "iscsi_queuecommand" },
	{ 0xc7c40e45, "iscsi_session_recovery_timedout" },
	{ 0x1f338238, "iscsi_tcp_cleanup_task" },
	{ 0x30838257, "iscsi_tcp_task_xmit" },
	{ 0xdb855494, "iscsi_tcp_task_init" },
	{ 0x7c3f917c, "iscsi_conn_send_pdu" },
	{ 0x7b19ddc5, "iscsi_host_set_param" },
	{ 0x18de717d, "iscsi_session_get_param" },
	{ 0x2ebf86ce, "iscsi_conn_start" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x48d82af9, "iscsi_unregister_transport" },
	{ 0xca09743e, "iscsi_register_transport" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0x367af61c, "iscsi_tcp_conn_setup" },
	{ 0x4186e54c, "iscsi_conn_stop" },
	{ 0x68a4204b, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x28e6a191, "iscsi_tcp_conn_teardown" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xa592a1a, "sk_free" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x9881549, "blk_queue_dma_alignment" },
	{ 0x27e1a049, "printk" },
	{ 0xae9c17dc, "iscsi_tcp_r2tpool_alloc" },
	{ 0x207ba8ad, "iscsi_session_setup" },
	{ 0x3c1a8888, "iscsi_host_add" },
	{ 0x8c6b091a, "iscsi_host_alloc" },
	{ 0x2b7a69d3, "iscsi_host_free" },
	{ 0x5f27a433, "iscsi_host_remove" },
	{ 0xc92e622f, "iscsi_session_teardown" },
	{ 0x6f32895, "iscsi_tcp_r2tpool_free" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x7e583da9, "iscsi_tcp_recv_skb" },
	{ 0x49e4ec8b, "tcp_read_sock" },
	{ 0x8e2524c6, "iscsi_conn_queue_work" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x50d83074, "fput" },
	{ 0xb2230fde, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xfe5f915d, "sk_set_memalloc" },
	{ 0x1aab669c, "iscsi_conn_bind" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x192a0253, "iscsi_tcp_set_max_r2t" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x2f6e9a13, "iscsi_set_param" },
	{ 0x96c8d79f, "kernel_getpeername" },
	{ 0xd601412e, "iscsi_conn_get_param" },
	{ 0x2bb0f125, "iscsi_host_get_param" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x443c2107, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7dc5efc, "iscsi_tcp_conn_get_stats" },
	{ 0x58ace4f3, "iscsi_conn_failure" },
	{ 0xf7d6636f, "current_task" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x908acb1d, "iscsi_tcp_segment_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x388589ee, "iscsi_tcp_segment_done" },
	{ 0x86db5987, "kernel_sendmsg" },
	{ 0x9fb66fd6, "iscsi_tcp_dgst_header" },
	{ 0x6b595567, "iscsi_segment_seek_sg" },
	{ 0x3748bd9a, "iscsi_segment_init_linear" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "53890CB088EADDCE71881BD");
MODULE_INFO(rhelversion, "8.0");
