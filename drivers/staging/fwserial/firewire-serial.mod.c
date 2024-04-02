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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xc7f4b92, "single_open" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x2a882571, "fw_send_request" },
	{ 0x985ca3e0, "single_release" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x41715c18, "seq_puts" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x89b623c9, "tty_port_open" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4e94b037, "fw_bus_type" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x7a8e4d82, "tty_buffer_space_avail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x6ce150f3, "tty_buffer_set_limit" },
	{ 0x98004e1a, "tty_vhangup" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf49649cb, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8ff84f09, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0xec88350c, "fw_core_remove_address_handler" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x121da905, "queue_work_on" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x807ab5cb, "fw_run_transaction" },
	{ 0x6da974ae, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("ieee1394:ven*mo*sp00D00D1Ever0000E81C*");

MODULE_INFO(srcversion, "17222BB6FF5B2280E42A574");
MODULE_INFO(rhelversion, "8.0");
