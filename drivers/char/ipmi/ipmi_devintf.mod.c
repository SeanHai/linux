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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xcc6f4a0c, "ipmi_smi_watcher_unregister" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2e39c545, "ipmi_smi_watcher_register" },
	{ 0xa047947, "class_destroy" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x705dd14, "ipmi_register_for_cmd" },
	{ 0xfe0f2369, "ipmi_get_maintenance_mode" },
	{ 0xd54a5050, "ipmi_unregister_for_cmd" },
	{ 0xfaaa4831, "ipmi_set_my_address" },
	{ 0x3bc993e, "ipmi_set_my_LUN" },
	{ 0xec1c2a90, "ipmi_get_my_address" },
	{ 0x74778a80, "ipmi_get_my_LUN" },
	{ 0x12dd1e77, "ipmi_set_maintenance_mode" },
	{ 0x50f65edf, "ipmi_set_gets_events" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc4d9f382, "ipmi_create_user" },
	{ 0xd1f579d0, "ipmi_free_recv_msg" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x27e1a049, "printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2df52479, "device_create" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "EB3FB294FFEB7621FB3FC44");
MODULE_INFO(rhelversion, "8.0");
