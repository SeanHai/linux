#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x17bcfed7, "__vsock_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc79d5ef, "vm_sockets_get_local_cid" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x27e5ea64, "vsock_stream_has_space" },
	{ 0x5bb52741, "vsock_core_get_transport" },
	{ 0x6bc2ffdf, "bpf_trace_run10" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x858ce318, "vsock_find_connected_socket" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xf7d6636f, "current_task" },
	{ 0xef749ca, "vsock_stream_has_data" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xa592a1a, "sk_free" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xea01893d, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x24fea5a6, "bpf_trace_run8" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0xa02f7bdb, "vsock_deliver_tap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x32fb2404, "vsock_remove_sock" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x100155fe, "vsock_insert_connected" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf47fbc30, "vsock_enqueue_accept" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";


MODULE_INFO(srcversion, "2AD672AAD11F1A16782DCCC");
MODULE_INFO(rhelversion, "8.0");
