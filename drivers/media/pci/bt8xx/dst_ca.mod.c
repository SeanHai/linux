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
	{ 0xeff89689, "dst_error_recovery" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xeccf96ab, "rdc_reset_state" },
	{ 0x27af1548, "dst_wait_dst_ready" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe7ddb3d3, "dvb_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x28839af, "dst_error_bailout" },
	{ 0x43a983fd, "dst_check_sum" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xf37437bc, "read_dst" },
	{ 0x95a1cbc6, "dst_comm_init" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x9d4e3bbf, "dst_pio_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x250b1569, "write_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x362ef408, "_copy_from_user" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dst,dvb-core";


MODULE_INFO(srcversion, "0BB3AADB51E789A6822B665");
MODULE_INFO(rhelversion, "8.0");
